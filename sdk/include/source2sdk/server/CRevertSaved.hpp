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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CRevertSaved : public source2sdk::server::CModelPointEntity
        {
        public:
            float m_loadTime; // 0x_            
            float m_Duration; // 0x_            
            float m_HoldTime; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputReload; // 0x_
            // void CRevertSavedLoadThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CRevertSaved because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CRevertSaved) == 0x_);
    };
};
