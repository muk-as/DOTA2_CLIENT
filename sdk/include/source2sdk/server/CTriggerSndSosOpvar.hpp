#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xce0
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CTriggerSndSosOpvar : public server::CBaseTrigger
    {
    public:
        // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTouchingPlayers;
        char m_hTouchingPlayers[0x18]; // 0x980        
        Vector m_flPosition; // 0x998        
        float m_flCenterSize; // 0x9a4        
        float m_flMinVal; // 0x9a8        
        float m_flMaxVal; // 0x9ac        
        CUtlSymbolLarge m_opvarName; // 0x9b0        
        CUtlSymbolLarge m_stackName; // 0x9b8        
        CUtlSymbolLarge m_operatorName; // 0x9c0        
        bool m_bVolIs2D; // 0x9c8        
        char m_opvarNameChar[256]; // 0x9c9        
        char m_stackNameChar[256]; // 0xac9        
        char m_operatorNameChar[256]; // 0xbc9        
        [[maybe_unused]] std::uint8_t pad_0xcc9[0x3]; // 0xcc9
        Vector m_VecNormPos; // 0xccc        
        float m_flNormCenterSize; // 0xcd8        
        [[maybe_unused]] std::uint8_t pad_0xcdc[0x4];
        
        // Datamap fields:
        // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
        // void m_opvarNameChar; // 0x9c9
        // void m_stackNameChar; // 0xac9
        // void m_operatorNameChar; // 0xbc9
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
    static_assert(sizeof(CTriggerSndSosOpvar) == 0xce0);
};
