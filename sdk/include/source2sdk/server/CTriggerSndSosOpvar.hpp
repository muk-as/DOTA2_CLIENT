#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xcf8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerSndSosOpvar : public source2sdk::server::CBaseTrigger
        {
        public:
            // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTouchingPlayers;
            char m_hTouchingPlayers[0x18]; // 0x998            
            Vector m_flPosition; // 0x9b0            
            float m_flCenterSize; // 0x9bc            
            float m_flMinVal; // 0x9c0            
            float m_flMaxVal; // 0x9c4            
            CUtlSymbolLarge m_opvarName; // 0x9c8            
            CUtlSymbolLarge m_stackName; // 0x9d0            
            CUtlSymbolLarge m_operatorName; // 0x9d8            
            bool m_bVolIs2D; // 0x9e0            
            char m_opvarNameChar[256]; // 0x9e1            
            char m_stackNameChar[256]; // 0xae1            
            char m_operatorNameChar[256]; // 0xbe1            
            uint8_t _pad0ce1[0x3]; // 0xce1
            Vector m_VecNormPos; // 0xce4            
            float m_flNormCenterSize; // 0xcf0            
            uint8_t _pad0cf4[0x4];
            
            // Datamap fields:
            // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
            // void m_opvarNameChar; // 0x9e1
            // void m_stackNameChar; // 0xae1
            // void m_operatorNameChar; // 0xbe1
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerSndSosOpvar) == 0xcf8);
    };
};
