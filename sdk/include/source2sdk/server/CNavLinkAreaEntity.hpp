#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x560
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CNavLinkAreaEntity : public server::CPointEntity
    {
    public:
        float m_flWidth; // 0x4b8        
        Vector m_vLocatorOffset; // 0x4bc        
        QAngle m_qLocatorAnglesOffset; // 0x4c8        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4]; // 0x4d4
        CUtlSymbolLarge m_strMovementForward; // 0x4d8        
        CUtlSymbolLarge m_strMovementReverse; // 0x4e0        
        int32_t m_nNavLinkIdForward; // 0x4e8        
        int32_t m_nNavLinkIdReverse; // 0x4ec        
        bool m_bEnabled; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4f1[0x7]; // 0x4f1
        CUtlSymbolLarge m_strFilterName; // 0x4f8        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hFilter;
        char m_hFilter[0x4]; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x504[0x4]; // 0x504
        entity2::CEntityIOOutput m_OnNavLinkStart; // 0x508        
        entity2::CEntityIOOutput m_OnNavLinkFinish; // 0x530        
        bool m_bIsTerminus; // 0x558        
        [[maybe_unused]] std::uint8_t pad_0x559[0x7];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNavLinkAreaEntity because it is not a standard-layout class
    static_assert(sizeof(CNavLinkAreaEntity) == 0x560);
};
