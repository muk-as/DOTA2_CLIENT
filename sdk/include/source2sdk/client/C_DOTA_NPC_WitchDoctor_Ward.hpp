#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"

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
        // Size: 0x1a50
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "int m_nTargetType"
        // static metadata: MNetworkVarNames "int m_nTargetFlags"
        #pragma pack(push, 1)
        class C_DOTA_NPC_WitchDoctor_Ward : public source2sdk::client::C_DOTA_BaseNPC_Additive
        {
        public:
            source2sdk::client::ParticleIndex_t m_nFXSkullIndex; // 0x1a40            
            // metadata: MNetworkEnable
            std::int32_t m_nTargetType; // 0x1a44            
            // metadata: MNetworkEnable
            std::int32_t m_nTargetFlags; // 0x1a48            
            uint8_t _pad1a4c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_NPC_WitchDoctor_Ward because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_NPC_WitchDoctor_Ward) == 0x1a50);
    };
};
