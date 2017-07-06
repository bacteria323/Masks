//
//  FaceDetector.h
//  Maks
//
//  Created by Shun Lee on 6/7/2017.
//  Copyright © 2017 mustardLabs. All rights reserved.
//

#ifndef FaceDetector_h
#define FaceDetector_h

//#include <stdio.h>
#include <opencv2/objdetect.hpp>
#include "Face.h"

class FaceDetector {
    public:
        FaceDetector(const std::string &humanFaceCascadePath,
                     const std::string &catFaceCascadePath,
                     const std::string &humanLeftEyeCascadePath,
                     const std::string &humanRightEyeCascadePath){}
};

#endif /* FaceDetector_h */
