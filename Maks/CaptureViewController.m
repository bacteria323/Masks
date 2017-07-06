//
//  ViewController.m
//  Maks
//
//  Created by Shun Lee on 4/7/2017.
//  Copyright © 2017 mustardLabs. All rights reserved.
//

#import <opencv2/core.hpp>
#import <opencv2/imgcodecs/ios.h>
#import <opencv2/imgproc.hpp>

#import "CaptureViewController.h"
#import "FaceDetector.h"
//#import "ReviewViewController.h"
#import "VideoCamera.h"

const double DETECT_RESIZE_FACTOR = 0.5;

@interface CaptureViewController () <CvVideoCameraDelegate> {
//    FaceDetector *faceDetector;
//    std::vector<Face> detectedFaces;
//    Face bestDetectedFace;
//    Face faceToMerge0;
//    Face faceToMerge1;
}

//@property IBOutlet UIView *backgroundView;
//
//@property IBOutlet UIBarButtonItem *face0Button;
//@property IBOutlet UIBarButtonItem *face1Button;
//@property IBOutlet UIBarButtonItem *mergeButton;
//
//@property IBOutlet UIImageView *face0ImageView;
//@property IBOutlet UIImageView *face1ImageView;
//
//@property VideoCamera *videoCamera;

//- (IBAction)onTapToSetPointOfInterest:(UITapGestureRecognizer *)tapGesture;
//- (IBAction)onColorModeSelected:(UISegmentedControl *)segmentedControl;
//- (IBAction)onSwitchCameraButtonPressed;
//- (IBAction)onFace0ButtonPressed;
//- (IBAction)onFace1ButtonPressed;

//- (void)refresh;
//- (void)processImage:(cv::Mat &)mat;
//- (void)showFace:(Face &)face inImageView:(UIImageView *)imageView;
//- (UIImage *)imageFromCapturedMat:(const cv::Mat &)mat;

@end

@implementation CaptureViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (void)refresh {
}

- (void)processImage:(cv::Mat &)mat{
    
}

- (void)showFace:(Face &)face inImageView:(UIImageView *)imageView{
    
}

- (UIImage *)imageFromCapturedMat:(const cv::Mat &)mat{
    
    return nil;
}

@end
