//
//  VideoCamera.h
//  Maks
//
//  Created by Shun Lee on 5/7/2017.
//  Copyright © 2017 mustardLabs. All rights reserved.
//

#ifndef VideoCamera_h
#define VideoCamera_h

#import <opencv2/videoio/cap_ios.h>

@interface VideoCamera : CvVideoCamera // colon is for class inheritance, ie VideoCamer inherits CvVideoCamera

@property BOOL letterboxPreview; // letterboxing = maintain aspect ratio and fill in remaining space with black bars

- (void)setPointOfInterestInParentViewSpace:(CGPoint)point;

@end

#endif /* VideoCamera_h */
