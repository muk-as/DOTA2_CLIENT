#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TOGGLE_STATE.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        class CBaseToggle : public source2sdk::server::CBaseModelEntity
        {
        public:
            source2sdk::server::TOGGLE_STATE m_toggle_state; // 0x_            
            float m_flMoveDistance; // 0x_            
            float m_flWait; // 0x_            
            float m_flLip; // 0x_            
            bool m_bAlwaysFireBlockedOutputs; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            Vector m_vecPosition1; // 0x_            
            Vector m_vecPosition2; // 0x_            
            QAngle m_vecMoveAng; // 0x_            
            QAngle m_vecAngle1; // 0x_            
            QAngle m_vecAngle2; // 0x_            
            float m_flHeight; // 0x_            
            // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hActivator;
            char m_hActivator[0x_]; // 0x_            
            Vector m_vecFinalDest; // 0x_            
            QAngle m_vecFinalAngle; // 0x_            
            std::int32_t m_movementType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_sMaster; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseToggle because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseToggle) == 0x_);
    };
};
