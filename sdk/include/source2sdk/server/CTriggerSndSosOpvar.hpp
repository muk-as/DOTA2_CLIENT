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
        // Size: 0xd20
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerSndSosOpvar : public source2sdk::server::CBaseTrigger
        {
        public:
            // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTouchingPlayers;
            char m_hTouchingPlayers[0x18]; // 0x9c0            
            Vector m_flPosition; // 0x9d8            
            float m_flCenterSize; // 0x9e4            
            float m_flMinVal; // 0x9e8            
            float m_flMaxVal; // 0x9ec            
            CUtlSymbolLarge m_opvarName; // 0x9f0            
            CUtlSymbolLarge m_stackName; // 0x9f8            
            CUtlSymbolLarge m_operatorName; // 0xa00            
            bool m_bVolIs2D; // 0xa08            
            char m_opvarNameChar[256]; // 0xa09            
            char m_stackNameChar[256]; // 0xb09            
            char m_operatorNameChar[256]; // 0xc09            
            uint8_t _pad0d09[0x3]; // 0xd09
            Vector m_VecNormPos; // 0xd0c            
            float m_flNormCenterSize; // 0xd18            
            uint8_t _pad0d1c[0x4];
            
            // Datamap fields:
            // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
            // void m_opvarNameChar; // 0xa09
            // void m_stackNameChar; // 0xb09
            // void m_operatorNameChar; // 0xc09
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerSndSosOpvar) == 0xd20);
    };
};
