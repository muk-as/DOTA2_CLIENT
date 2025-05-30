#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTA_NPC_Observer_Ward.hpp"

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
        // Standard-layout class: false
        // Size: 0x1a20
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDOTA_NPC_Observer_Ward_TrueSight : public source2sdk::client::CDOTA_NPC_Observer_Ward
        {
        public:
            float m_flTrueSight; // 0x1a18            
            CEntityHandle m_hAbilityEntity; // 0x1a1c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_NPC_Observer_Ward_TrueSight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTA_NPC_Observer_Ward_TrueSight) == 0x1a20);
    };
};
