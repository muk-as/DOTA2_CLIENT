#pragma once
#include "source2sdk/client/C_DOTA_BaseNPC_Additive.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1808
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flAim"
    #pragma pack(push, 1)
    class C_DOTA_BaseNPC_Creep : public client::C_DOTA_BaseNPC_Additive
    {
    public:
        // metadata: MNetworkEnable
        float m_flAim; // 0x1800        
        [[maybe_unused]] std::uint8_t pad_0x1804[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_BaseNPC_Creep because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_BaseNPC_Creep) == 0x1808);
};
