#pragma once
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/server/CDOTA_BaseNPC_Additive.hpp"
#include "source2sdk/server/NianDamageTaken_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1830
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Unit_Nian_Attachment : public server::CDOTA_BaseNPC_Additive
    {
    public:
        bool m_bAttachmentBroken; // 0x1810        
        [[maybe_unused]] std::uint8_t pad_0x1811[0x3]; // 0x1811
        client::ParticleIndex_t m_nfxIndex_tailgrow; // 0x1814        
        // m_vecRecentDamage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::NianDamageTaken_t> m_vecRecentDamage;
        char m_vecRecentDamage[0x18]; // 0x1818        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Unit_Nian_Attachment because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Unit_Nian_Attachment) == 0x1830);
};
