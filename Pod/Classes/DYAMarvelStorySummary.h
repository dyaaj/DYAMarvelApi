//
//  DYAMarvelStorySummary.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import <JSONModel/JSONModel.h>

@protocol DYAMarvelStorySummary
@end

@interface DYAMarvelStorySummary : JSONModel

@property (strong, nonatomic) NSString *resourceURI;
@property (strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSString *type;

@end
