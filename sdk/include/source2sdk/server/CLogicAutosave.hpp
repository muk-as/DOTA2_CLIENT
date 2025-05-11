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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4e8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CLogicAutosave : public source2sdk::server::CLogicalEntity
        {
        public:
            bool m_bForceNewLevelUnit; // 0x4d8            
            uint8_t _pad04d9[0x3]; // 0x4d9
            std::int32_t m_minHitPoints; // 0x4dc            
            std::int32_t m_minHitPointsToCommit; // 0x4e0            
            uint8_t _pad04e4[0x4];
            
            // Datamap fields:
            // void InputSave; // 0x0
            // float InputSaveDangerous; // 0x0
            // int32_t InputSetMinHitpointsThreshold; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicAutosave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicAutosave) == 0x4e8);
    };
};
