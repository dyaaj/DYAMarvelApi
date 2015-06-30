//
//  DYAMarvelComicDataContainer.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import <DYAMarvelApi/DYAMarvelApi.h>
#import "DYAMarvelComic.h"

@interface DYAMarvelComicDataContainer : DYAMarvelDataContainer

@property (strong, nonatomic) NSArray<DYAMarvelComic> *results;

@end
