#pragma once
#include "source2sdk/client/CDOTAEventActionGrantAndClaimPair.hpp"
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
    // Size: 0x20
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAEventActionGrantAndClaimPairTrigger
    {
    public:
        CUtlString m_sMapClassToAdd; // 0x0        
        // m_vecGrantAndClaimActionPairs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAEventActionGrantAndClaimPair> m_vecGrantAndClaimActionPairs;
        char m_vecGrantAndClaimActionPairs[0x18]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAEventActionGrantAndClaimPairTrigger, m_sMapClassToAdd) == 0x0);
    static_assert(offsetof(CDOTAEventActionGrantAndClaimPairTrigger, m_vecGrantAndClaimActionPairs) == 0x8);
    
    static_assert(sizeof(CDOTAEventActionGrantAndClaimPairTrigger) == 0x20);
};
