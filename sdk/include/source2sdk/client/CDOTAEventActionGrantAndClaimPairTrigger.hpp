#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAEventActionGrantAndClaimPair.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAEventActionGrantAndClaimPairTrigger
        {
        public:
            CUtlString m_sMapClassToAdd; // 0x_            
            // m_vecGrantAndClaimActionPairs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAEventActionGrantAndClaimPair> m_vecGrantAndClaimActionPairs;
            char m_vecGrantAndClaimActionPairs[0x_]; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAEventActionGrantAndClaimPairTrigger, m_sMapClassToAdd) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAEventActionGrantAndClaimPairTrigger, m_vecGrantAndClaimActionPairs) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAEventActionGrantAndClaimPairTrigger) == 0x_);
    };
};
