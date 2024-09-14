#pragma once
#include "source2sdk/client/C_SoundAreaEntityBase.hpp"
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
    // Size: 0x568
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flRadius"
    #pragma pack(push, 1)
    class C_SoundAreaEntitySphere : public client::C_SoundAreaEntityBase
    {
    public:
        // metadata: MNetworkEnable
        float m_flRadius; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x564[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundAreaEntitySphere because it is not a standard-layout class
    static_assert(sizeof(C_SoundAreaEntitySphere) == 0x568);
};
