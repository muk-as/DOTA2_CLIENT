#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Building.hpp"
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
    // Size: 0x19b0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hTowerAttackTarget"
    // static metadata: MNetworkVarNames "EHANDLE m_hTowerHighFiveTarget"
    #pragma pack(push, 1)
    class CDOTA_BaseNPC_Tower : public server::CDOTA_BaseNPC_Building
    {
    public:
        entity2::CEntityIOOutput m_OnTowerKilled; // 0x1978        
        // metadata: MNetworkEnable
        // m_hTowerAttackTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTowerAttackTarget;
        char m_hTowerAttackTarget[0x4]; // 0x19a0        
        // metadata: MNetworkEnable
        // m_hTowerHighFiveTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTowerHighFiveTarget;
        char m_hTowerHighFiveTarget[0x4]; // 0x19a4        
        [[maybe_unused]] std::uint8_t pad_0x19a8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_BaseNPC_Tower because it is not a standard-layout class
    static_assert(sizeof(CDOTA_BaseNPC_Tower) == 0x19b0);
};
