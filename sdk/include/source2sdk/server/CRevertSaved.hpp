#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CModelPointEntity.hpp"

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
        // Size: 0x800
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CRevertSaved : public source2sdk::server::CModelPointEntity
        {
        public:
            float m_loadTime; // 0x7f0            
            float m_Duration; // 0x7f4            
            float m_HoldTime; // 0x7f8            
            uint8_t _pad07fc[0x4];
            
            // Datamap fields:
            // void InputReload; // 0x0
            // void CRevertSavedLoadThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRevertSaved because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRevertSaved) == 0x800);
    };
};
