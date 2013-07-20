//
//  ViewController.h
//  to.box
//
//  Created by Ken Hirakawa on 7/16/13.
//  Copyright (c) 2013 Ken Hirakawa. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SSToolkit/SSToolkit.h>

@interface ViewController : UIViewController <UITextViewDelegate>
@property (strong, nonatomic) IBOutlet SSTextView *textView;

@end
