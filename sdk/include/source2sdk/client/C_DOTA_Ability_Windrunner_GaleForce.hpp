#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseAbility.hpp"

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
        // Size: 0x6a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Windrunner_GaleForce : public source2sdk::client::C_DOTABaseAbility
        {
        public:
            Vector m_vEndpoint; // 0x680            
            Vector m_vFlowPosition; // 0x68c            
            float duration; // 0x698            
            uint8_t _pad069c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Windrunner_GaleForce because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Windrunner_GaleForce) == 0x6a0);
    };
};
