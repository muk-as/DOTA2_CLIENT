#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
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
        class CNavLinkAreaEntity : public source2sdk::server::CPointEntity
        {
        public:
            float m_flWidth; // 0x_            
            Vector m_vLocatorOffset; // 0x_            
            QAngle m_qLocatorAnglesOffset; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_strMovementForward; // 0x_            
            CUtlSymbolLarge m_strMovementReverse; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bEnabled; // 0x_            
            bool m_bAllowCrossMovableConnections; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_strFilterName; // 0x_            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIOOutput m_OnNavLinkStart; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnNavLinkFinish; // 0x_            
            bool m_bIsTerminus; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::int32_t m_nSplits; // 0x_            
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CNavLinkAreaEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CNavLinkAreaEntity) == 0x_);
    };
};
