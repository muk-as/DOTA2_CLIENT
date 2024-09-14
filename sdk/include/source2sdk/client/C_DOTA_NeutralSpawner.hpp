#pragma once
#include "source2sdk/client/C_PointEntity.hpp"
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
    // Size: 0x540
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_Type"
    #pragma pack(push, 1)
    class C_DOTA_NeutralSpawner : public client::C_PointEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        int32_t m_Type; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x53c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_NeutralSpawner because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_NeutralSpawner) == 0x540);
};
