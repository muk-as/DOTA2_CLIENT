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
    // Size: 0xcb8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerSndSosOpvar : public server::CBaseTrigger
    {
    public:
        // m_hTouchingPlayers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTouchingPlayers;
        char m_hTouchingPlayers[0x18]; // 0x958        
        Vector m_flPosition; // 0x970        
        float m_flCenterSize; // 0x97c        
        float m_flMinVal; // 0x980        
        float m_flMaxVal; // 0x984        
        CUtlSymbolLarge m_opvarName; // 0x988        
        CUtlSymbolLarge m_stackName; // 0x990        
        CUtlSymbolLarge m_operatorName; // 0x998        
        bool m_bVolIs2D; // 0x9a0        
        char m_opvarNameChar[256]; // 0x9a1        
        char m_stackNameChar[256]; // 0xaa1        
        char m_operatorNameChar[256]; // 0xba1        
        [[maybe_unused]] std::uint8_t pad_0xca1[0x3]; // 0xca1
        Vector m_VecNormPos; // 0xca4        
        float m_flNormCenterSize; // 0xcb0        
        [[maybe_unused]] std::uint8_t pad_0xcb4[0x4];
        
        // Datamap fields:
        // void CTriggerSndSosOpvarSndSosTriggerOpvarWaitOver; // 0x0
        // void m_opvarNameChar; // 0x9a1
        // void m_stackNameChar; // 0xaa1
        // void m_operatorNameChar; // 0xba1
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerSndSosOpvar because it is not a standard-layout class
    static_assert(sizeof(CTriggerSndSosOpvar) == 0xcb8);
};
