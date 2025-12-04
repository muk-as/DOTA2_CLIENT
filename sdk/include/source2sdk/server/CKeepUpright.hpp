#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPointEntity.hpp"
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
        class CKeepUpright : public source2sdk::server::CPointEntity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            Vector m_worldGoalAxis; // 0x_            
            Vector m_localTestAxis; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_nameAttach; // 0x_            
            // m_attachedObject has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_attachedObject;
            char m_attachedObject[0x_]; // 0x_            
            float m_angularLimit; // 0x_            
            bool m_bActive; // 0x_            
            bool m_bDampAllRotation; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_pController; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // float InputSetAngularLimit; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CKeepUpright because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CKeepUpright) == 0x_);
    };
};
