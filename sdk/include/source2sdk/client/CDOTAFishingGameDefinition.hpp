#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EFishingGameFishCategory.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CDOTAFishingGameFish;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataSingleton
        #pragma pack(push, 1)
        class CDOTAFishingGameDefinition
        {
        public:
            CUtlString m_strID; // 0x_            
            bool m_bBurrowedFish; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_strMapName; // 0x_            
            CUtlString m_strBurrowedFishParticle; // 0x_            
            // m_vecFishTypes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAFishingGameFish*> m_vecFishTypes;
            char m_vecFishTypes[0x_]; // 0x_            
            // m_mapFishNameToVecIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<CUtlString,std::int32_t> m_mapFishNameToVecIndex;
            char m_mapFishNameToVecIndex[0x_]; // 0x_            
            // m_mapCategoryToDifficulty has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlOrderedMap<source2sdk::client::EFishingGameFishCategory,float> m_mapCategoryToDifficulty;
            char m_mapCategoryToDifficulty[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameDefinition, m_strID) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameDefinition, m_bBurrowedFish) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameDefinition, m_strMapName) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameDefinition, m_strBurrowedFishParticle) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameDefinition, m_vecFishTypes) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameDefinition, m_mapFishNameToVecIndex) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAFishingGameDefinition, m_mapCategoryToDifficulty) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAFishingGameDefinition) == 0x_);
    };
};
