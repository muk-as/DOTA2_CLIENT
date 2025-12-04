#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ArtyLevelID_t.hpp"
#include "source2sdk/client/ArtyLevelObjectInstance_t.hpp"
#include "source2sdk/client/ArtyLevelWeaponInstance_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        struct ArtyLevelInfo_t
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::client::ArtyLevelID_t m_unID; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_sLocLevelName; // 0x_            
            source2sdk::client::ArtyLevelObjectInstance_t m_playerInfo; // 0x_            
            // m_vecGameObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ArtyLevelObjectInstance_t> m_vecGameObjects;
            char m_vecGameObjects[0x_]; // 0x_            
            // m_vecWeapons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ArtyLevelWeaponInstance_t> m_vecWeapons;
            char m_vecWeapons[0x_]; // 0x_            
            std::int32_t m_nLevelCompletePoints; // 0x_            
            std::int32_t m_nTimeBonusBasePoints; // 0x_            
            std::int32_t m_nTimeBonusMaxPoints; // 0x_            
            std::int32_t m_nTimeBonusFastTime; // 0x_            
            std::int32_t m_nTimeBonusMaxTime; // 0x_            
            float m_flBackgroundOffsetX; // 0x_            
            std::int32_t m_aryStarPointThresholds[3]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CPanoramaImageName m_sBackgroundImage; // 0x_            
            CPanoramaImageName m_sTerrainBackgroundImage; // 0x_            
            CPanoramaImageName m_sTerrainImage; // 0x_            
            CPanoramaImageName m_sTerrainForegroundImage; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in ArtyLevelInfo_t because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::ArtyLevelInfo_t) == 0x_);
    };
};
