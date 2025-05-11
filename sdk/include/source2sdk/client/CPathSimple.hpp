#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPathQueryComponent.hpp"
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x610
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        // static metadata: MNetworkVarNames "CPathQueryComponent::Storage_t m_CPathQueryComponent"
        // static metadata: MNetworkVarNames "CUtlString m_pathString"
        #pragma pack(push, 1)
        class CPathSimple : public source2sdk::client::C_BaseEntity
        {
        public:
            uint8_t _pad0510[0x10]; // 0x510
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CPathQueryComponent"
            // metadata: MNetworkAlias "CPathQueryComponent"
            // metadata: MNetworkTypeAlias "CPathQueryComponent"
            source2sdk::client::CPathQueryComponent m_CPathQueryComponent; // 0x520            
            uint8_t _pad05b0[0x50]; // 0x5b0
            // metadata: MNetworkEnable
            CUtlString m_pathString; // 0x600            
            uint8_t _pad0608[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPathSimple because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPathSimple) == 0x610);
    };
};
