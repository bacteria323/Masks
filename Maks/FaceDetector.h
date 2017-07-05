//
//  FaceDetector.h
//  Maks
//
//  Created by Shun Lee on 5/7/2017.
//  Copyright © 2017 mustardLabs. All rights reserved.
//

#ifndef FaceDetector_h
#define FaceDetector_h

#include <opencv2/objdetect.hpp>
#include "Face.h"

class FaceDetector
{
    public:
        FaceDetector(const std::string &humanFaceCascadePath,
                     const std::string &catFaceCascadePath,
                     const std::string &humanLeftEyeCascadePath,
                     const std::string &humanRightEyeCascadePath);
        
        void detect(cv::Mat &image, std::vector<Face> &faces,
                    double resizeFactor = 1.0, bool draw = false);
    
    private:
        void equalize(const cv::Mat &image);
        void detectInnerComponents(const cv::Mat &image,
                                   std::vector<Face> &faces, double resizeFactor, bool draw,
                                   Species species, cv::Rect faceRect);
        
        cv::CascadeClassifier humanFaceClassifier;
        cv::CascadeClassifier catFaceClassifier;
        cv::CascadeClassifier humanLeftEyeClassifier;
        cv::CascadeClassifier humanRightEyeClassifier;
    
        // if we add "WITH_CLAHE" in Preprocessor Macros, this class will make use of
        // advanced equalization algorithm called contrast limited adaptive histogram equalization (CLAHE), otherwise it will just use a simplified equalization algorithm
        #ifdef WITH_CLAHE
            cv::Ptr<cv::CLAHE> clahe;
        #endif
        
        cv::Mat resizedImage;
        cv::Mat equalizedImage;
};

#endif /* FaceDetector_h */
