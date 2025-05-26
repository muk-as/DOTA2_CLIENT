#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4f0
        // Has VTable
        // Construct allowed
        // MNetworkNoBase
        // 
        // static metadata: MNetworkVarNames "int8 m_iCurrentMaxRagdollCount"
        #pragma pack(push, 1)
        class CRagdollManager : public source2sdk::server::CBaseEntity
        {
        public:
            // metadata: MNetworkEnable
            std::int8_t m_iCurrentMaxRagdollCount; // 0x4e0            
            uint8_t _pad04e1[0x3]; // 0x4e1
            std::int32_t m_iMaxRagdollCount; // 0x4e4            
            bool m_bSaveImportant; // 0x4e8            
            bool m_bCanTakeDamage; // 0x4e9            
            uint8_t _pad04ea[0x6];
            
            // Datamap fields:
            // int32_t InputSetMaxRagdollCount; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollManager because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollManager) == 0x4f0);
    };
};
