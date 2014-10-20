//
//  RasTrackEditorControl.h
//  RFAudioStudio
//
//  Created by gouzhehua on 14-10-20.
//  Copyright (c) 2014年 TechAtk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RasSliderControl.h"

@interface RasTrackEditorControl : UIControl
{

}
@property (nonatomic, strong) UIImageView *imgViewWave;
@property (nonatomic, strong) RasSliderControl *topLeftSlider;
@property (nonatomic, strong) RasSliderControl *topRightSlider;
@property (nonatomic, strong) RasSliderControl *bottomLeftSlider;
@property (nonatomic, strong) RasSliderControl *bottomRightSlider;


@end
