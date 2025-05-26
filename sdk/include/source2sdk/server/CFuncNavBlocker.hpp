#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // Size: 0x7e0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncNavBlocker : public source2sdk::server::CBaseModelEntity
        {
        public:
            uint8_t _pad07c8[0x8]; // 0x7c8
            bool m_bDisabled; // 0x7d0            
            uint8_t _pad07d1[0x3]; // 0x7d1
            std::int32_t m_nBlockedTeamNumber; // 0x7d4            
            uint8_t _pad07d8[0x8];
            
            // Datamap fields:
            // void InputBlockNav; // 0x0
            // void InputUnblockNav; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncNavBlocker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncNavBlocker) == 0x7e0);
    };
};
