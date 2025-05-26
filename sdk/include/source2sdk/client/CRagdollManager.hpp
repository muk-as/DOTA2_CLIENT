#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5e8
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
        #pragma pack(push, 1)
        class CRagdollManager : public source2sdk::client::C_BaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int8_t m_iCurrentMaxRagdollCount; // 0x5e0            
            uint8_t _pad05e1[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollManager because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CRagdollManager) == 0x5e8);
    };
};
