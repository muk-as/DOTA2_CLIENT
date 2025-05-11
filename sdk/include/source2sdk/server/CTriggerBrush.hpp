#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
        // Size: 0x828
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerBrush : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0x7a8            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouch; // 0x7d0            
            source2sdk::entity2::CEntityIOOutput m_OnUse; // 0x7f8            
            std::int32_t m_iInputFilter; // 0x820            
            std::int32_t m_iDontMessageParent; // 0x824            
            
            // Datamap fields:
            // void InputDisable; // 0x0
            // void InputEnable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerBrush because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerBrush) == 0x828);
    };
};
