#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/HeroID_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x60
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldHeroReward
        {
        public:
            // metadata: MVDataUniqueMonotonicInt "_editor/next_id_hero_reward"
            source2sdk::client::HeroID_t m_unHeroID; // 0x0            
            uint8_t _pad0004[0x44]; // 0x4
            // metadata: MPropertyDescription
            // m_vecTokenNames has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CUtlString> m_vecTokenNames;
            char m_vecTokenNames[0x18]; // 0x48            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldHeroReward, m_unHeroID) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldHeroReward, m_vecTokenNames) == 0x48);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldHeroReward) == 0x60);
    };
};
