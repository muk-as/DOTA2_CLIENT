#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x4c0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_HiddenDisplacement"
    #pragma pack(push, 1)
    class CDOTA_DisplacementVisibility : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_HiddenDisplacement; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4bc[0x4];
        
        // Datamap fields:
        // int32_t InputHideDisplacement; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_DisplacementVisibility because it is not a standard-layout class
    static_assert(sizeof(CDOTA_DisplacementVisibility) == 0x4c0);
};
