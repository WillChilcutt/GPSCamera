//
//  ViewController.h
//  ExifTest
//
//  Created by Will Chilcutt on 5/9/13.
//  Copyright (c) 2013 Chilcutt Apps. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface ViewController : UIViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate ,CLLocationManagerDelegate>
{
    CLLocation *userCurrentLocation;
    CLLocationManager *clManager;
}
@end
