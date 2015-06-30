//
//  DYAMarvelImage.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelModel.h"

@protocol DYAMarvelImage
@end

@interface DYAMarvelImage : DYAMarvelModel

@property (strong, nonatomic) NSString *path;
@property (strong, nonatomic) NSString *extension;

@end
