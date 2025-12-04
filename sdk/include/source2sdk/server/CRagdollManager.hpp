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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            std::int8_t m_iCurrentMaxRagdollCount; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_iMaxRagdollCount; // 0x_            
            bool m_bSaveImportant; // 0x_            
            bool m_bCanTakeDamage; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // int32_t InputSetMaxRagdollCount; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRagdollManager because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRagdollManager) == 0x_);
    };
};
