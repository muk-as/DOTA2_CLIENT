#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerWeapon;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa8
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerWeapon > m_hMyWeapons"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hActiveWeapon"
    // static metadata: MNetworkVarNames "CHandle< CBasePlayerWeapon> m_hLastWeapon"
    // static metadata: MNetworkVarNames "uint16 m_iAmmo"
    #pragma pack(push, 1)
    class CPlayer_WeaponServices : public client::CPlayerPawnComponent
    {
    public:
        // metadata: MNetworkEnable
        // m_hMyWeapons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CBasePlayerWeapon>> m_hMyWeapons;
        char m_hMyWeapons[0x18]; // 0x40        
        // metadata: MNetworkEnable
        // m_hActiveWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerWeapon> m_hActiveWeapon;
        char m_hActiveWeapon[0x4]; // 0x58        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_hLastWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerWeapon> m_hLastWeapon;
        char m_hLastWeapon[0x4]; // 0x5c        
        // metadata: MNetworkEnable
        uint16_t m_iAmmo[32]; // 0x60        
        bool m_bPreventWeaponPickup; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayer_WeaponServices because it is not a standard-layout class
    static_assert(sizeof(CPlayer_WeaponServices) == 0xa8);
};
