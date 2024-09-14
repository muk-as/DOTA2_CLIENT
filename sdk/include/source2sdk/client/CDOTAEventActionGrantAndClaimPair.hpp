#pragma once
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
    // Standard-layout class: true
    // Size: 0x10
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAEventActionGrantAndClaimPair
    {
    public:
        CUtlString m_sEventActionGrant; // 0x0        
        CUtlString m_sEventActionClaim; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAEventActionGrantAndClaimPair, m_sEventActionGrant) == 0x0);
    static_assert(offsetof(CDOTAEventActionGrantAndClaimPair, m_sEventActionClaim) == 0x8);
    
    static_assert(sizeof(CDOTAEventActionGrantAndClaimPair) == 0x10);
};
