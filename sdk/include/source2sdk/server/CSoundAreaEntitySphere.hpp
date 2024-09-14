#pragma once
#include "source2sdk/server/CSoundAreaEntityBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4e0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_flRadius"
    #pragma pack(push, 1)
    class CSoundAreaEntitySphere : public server::CSoundAreaEntityBase
    {
    public:
        // metadata: MNetworkEnable
        float m_flRadius; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundAreaEntitySphere because it is not a standard-layout class
    static_assert(sizeof(CSoundAreaEntitySphere) == 0x4e0);
};
