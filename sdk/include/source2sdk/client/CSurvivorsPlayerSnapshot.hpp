#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CSurvivorsPowerUpSnapshot.hpp"
#include "source2sdk/client/SurvivorsHeroID_t.hpp"

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
        #pragma pack(push, 1)
        class CSurvivorsPlayerSnapshot
        {
        public:
            source2sdk::client::SurvivorsHeroID_t m_heroID; // 0x_            
            std::int32_t m_nCurrentLevel; // 0x_            
            float m_flCurrentExp; // 0x_            
            std::int32_t m_nRerollsRemaining; // 0x_            
            // m_vecPowerUps has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CSurvivorsPowerUpSnapshot> m_vecPowerUps;
            char m_vecPowerUps[0x_]; // 0x_            
            Vector m_vOrigin; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_heroID) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_nCurrentLevel) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_flCurrentExp) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_nRerollsRemaining) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_vecPowerUps) == 0x_);
        static_assert(offsetof(source2sdk::client::CSurvivorsPlayerSnapshot, m_vOrigin) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CSurvivorsPlayerSnapshot) == 0x_);
    };
};
