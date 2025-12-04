#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CLogicalEntity.hpp"

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
        class CLogicDistanceAutosave : public source2sdk::server::CLogicalEntity
        {
        public:
            CUtlSymbolLarge m_iszTargetEntity; // 0x_            
            float m_flDistanceToPlayer; // 0x_            
            bool m_bForceNewLevelUnit; // 0x_            
            bool m_bCheckCough; // 0x_            
            bool m_bThinkDangerous; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flDangerousTime; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputSave; // 0x_
            // float InputSaveDangerous; // 0x_
            // void CLogicDistanceAutosaveSaveThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicDistanceAutosave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicDistanceAutosave) == 0x_);
    };
};
