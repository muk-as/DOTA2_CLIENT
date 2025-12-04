#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CLogicAutosave.hpp"

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
        class CLogicActiveAutosave : public source2sdk::server::CLogicAutosave
        {
        public:
            std::int32_t m_TriggerHitPoints; // 0x_            
            float m_flTimeToTrigger; // 0x_            
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x_            
            float m_flDangerousTime; // 0x_            
            
            // Datamap fields:
            // void CLogicActiveAutosaveSaveThink; // 0x_
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicActiveAutosave because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicActiveAutosave) == 0x_);
    };
};
