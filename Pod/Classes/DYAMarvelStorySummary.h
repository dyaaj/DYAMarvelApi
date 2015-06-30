//
//  DYAMarvelStorySummary.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import "DYAMarvelModel.h"

@protocol DYAMarvelStorySummary
@end

@interface DYAMarvelStorySummary : DYAMarvelModel

@property (strong, nonatomic) NSString *resourceURI;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *type;

@end
