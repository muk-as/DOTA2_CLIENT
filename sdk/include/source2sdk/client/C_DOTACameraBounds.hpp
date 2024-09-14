#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x550
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_vecBoundsMin"
    // static metadata: MNetworkVarNames "Vector m_vecBoundsMax"
    #pragma pack(push, 1)
    class C_DOTACameraBounds : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vecBoundsMin; // 0x538        
        // metadata: MNetworkEnable
        Vector m_vecBoundsMax; // 0x544        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTACameraBounds because it is not a standard-layout class
    static_assert(sizeof(C_DOTACameraBounds) == 0x550);
};
