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
    // Size: 0x588
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class CNavLinkAreaEntity : public server::CPointEntity
    {
    public:
        float m_flWidth; // 0x4e0        
        Vector m_vLocatorOffset; // 0x4e4        
        QAngle m_qLocatorAnglesOffset; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4fc[0x4]; // 0x4fc
        CUtlSymbolLarge m_strMovementForward; // 0x500        
        CUtlSymbolLarge m_strMovementReverse; // 0x508        
        int32_t m_nNavLinkIdForward; // 0x510        
        int32_t m_nNavLinkIdReverse; // 0x514        
        bool m_bEnabled; // 0x518        
        [[maybe_unused]] std::uint8_t pad_0x519[0x7]; // 0x519
        CUtlSymbolLarge m_strFilterName; // 0x520        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hFilter;
        char m_hFilter[0x4]; // 0x528        
        [[maybe_unused]] std::uint8_t pad_0x52c[0x4]; // 0x52c
        entity2::CEntityIOOutput m_OnNavLinkStart; // 0x530        
        entity2::CEntityIOOutput m_OnNavLinkFinish; // 0x558        
        bool m_bIsTerminus; // 0x580        
        [[maybe_unused]] std::uint8_t pad_0x581[0x7];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNavLinkAreaEntity because it is not a standard-layout class
    static_assert(sizeof(CNavLinkAreaEntity) == 0x588);
};
