//
//  DYAMarvelCharacterDataContainer.h
//  Pods
//
//  Created by David Yang on 28/06/2015.
//
//

#import <DYAMarvelApi/DYAMarvelApi.h>
#import "DYAMarvelCharacter.h"

@interface DYAMarvelCharacterDataContainer : DYAMarvelDataContainer

@property (strong, nonatomic) NSArray<DYAMarvelCharacter> *results;

@end
