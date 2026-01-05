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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerSndSosOpvar : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNotSaved
            // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTouchingPlayers;
            char m_hTouchingPlayers[0x_]; // 0x_            
            // metadata: MNotSaved
            Vector m_flPosition; // 0x_            
            float m_flCenterSize; // 0x_            
            float m_flMinVal; // 0x_            
            float m_flMaxVal; // 0x_            
            CUtlSymbolLarge m_opvarName; // 0x_            
            CUtlSymbolLarge m_stackName; // 0x_            
            CUtlSymbolLarge m_operatorName; // 0x_            
            bool m_bVolIs2D; // 0x_            
            // metadata: MNotSaved
            char m_opvarNameChar[256]; // 0x_            
            // metadata: MNotSaved
            char m_stackNameChar[256]; // 0x_            
            // metadata: MNotSaved
            char m_operatorNameChar[256]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            Vector m_VecNormPos; // 0x_            
            // metadata: MNotSaved
            float m_flNormCenterSize; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x_
            // void m_opvarNameChar; // 0x_
            // void m_stackNameChar; // 0x_
            // void m_operatorNameChar; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerSndSosOpvar) == 0x_);
    };
};
