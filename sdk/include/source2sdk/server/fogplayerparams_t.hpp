#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CFogController;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x40
    // Has VTable
    // Has Trivial Destructor
    // 
    // static metadata: MNetworkVarNames "CHandle< CFogController> m_hCtrl"
    #pragma pack(push, 1)
    struct fogplayerparams_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "PlayerFogController"
        // m_hCtrl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CFogController> m_hCtrl;
        char m_hCtrl[0x4]; // 0x8        
        float m_flTransitionTime; // 0xc        
        Color m_OldColor; // 0x10        
        float m_flOldStart; // 0x14        
        float m_flOldEnd; // 0x18        
        float m_flOldMaxDensity; // 0x1c        
        float m_flOldHDRColorScale; // 0x20        
        float m_flOldFarZ; // 0x24        
        Color m_NewColor; // 0x28        
        float m_flNewStart; // 0x2c        
        float m_flNewEnd; // 0x30        
        float m_flNewMaxDensity; // 0x34        
        float m_flNewHDRColorScale; // 0x38        
        float m_flNewFarZ; // 0x3c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(fogplayerparams_t, m_hCtrl) == 0x8);
    static_assert(offsetof(fogplayerparams_t, m_flTransitionTime) == 0xc);
    static_assert(offsetof(fogplayerparams_t, m_OldColor) == 0x10);
    static_assert(offsetof(fogplayerparams_t, m_flOldStart) == 0x14);
    static_assert(offsetof(fogplayerparams_t, m_flOldEnd) == 0x18);
    static_assert(offsetof(fogplayerparams_t, m_flOldMaxDensity) == 0x1c);
    static_assert(offsetof(fogplayerparams_t, m_flOldHDRColorScale) == 0x20);
    static_assert(offsetof(fogplayerparams_t, m_flOldFarZ) == 0x24);
    static_assert(offsetof(fogplayerparams_t, m_NewColor) == 0x28);
    static_assert(offsetof(fogplayerparams_t, m_flNewStart) == 0x2c);
    static_assert(offsetof(fogplayerparams_t, m_flNewEnd) == 0x30);
    static_assert(offsetof(fogplayerparams_t, m_flNewMaxDensity) == 0x34);
    static_assert(offsetof(fogplayerparams_t, m_flNewHDRColorScale) == 0x38);
    static_assert(offsetof(fogplayerparams_t, m_flNewFarZ) == 0x3c);
    
    static_assert(sizeof(fogplayerparams_t) == 0x40);
};
