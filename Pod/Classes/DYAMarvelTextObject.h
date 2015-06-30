//
//  DYAMarvelTextObject.h
//  Pods
//
//  Created by David Yang on 30/06/2015.
//
//

#import "DYAMarvelModel.h"

@protocol DYAMarvelTextObject
@end

@interface DYAMarvelTextObject : DYAMarvelModel

@property (strong, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *language;
@property (strong, nonatomic) NSString *text;

@end
