#pragma once
#include "source2sdk/server/CDOTA_BaseNPC_Hero.hpp"
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
    // Size: 0x1e70
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "EHANDLE m_hDoubleShotTarget"
    #pragma pack(push, 1)
    class CDOTA_Unit_Hero_Muerta : public server::CDOTA_BaseNPC_Hero
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        // m_hDoubleShotTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDoubleShotTarget;
        char m_hDoubleShotTarget[0x4]; // 0x1e68        
        [[maybe_unused]] std::uint8_t pad_0x1e6c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Hero_Muerta because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Hero_Muerta) == 0x1e70);
};
